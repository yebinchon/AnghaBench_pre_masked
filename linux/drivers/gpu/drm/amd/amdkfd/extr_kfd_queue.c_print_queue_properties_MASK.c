
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_properties {int doorbell_off; int doorbell_ptr; int write_ptr; int read_ptr; int vmid; int queue_id; int queue_address; int queue_percent; int queue_size; int type; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct queue_properties *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0("Printing queue properties:\n");
 FUNC_0("Queue Type: %u\n", VAR_0->type);
 FUNC_0("Queue Size: %llu\n", VAR_0->queue_size);
 FUNC_0("Queue percent: %u\n", VAR_0->queue_percent);
 FUNC_0("Queue Address: 0x%llX\n", VAR_0->queue_address);
 FUNC_0("Queue Id: %u\n", VAR_0->queue_id);
 FUNC_0("Queue Process Vmid: %u\n", VAR_0->vmid);
 FUNC_0("Queue Read Pointer: 0x%px\n", VAR_0->read_ptr);
 FUNC_0("Queue Write Pointer: 0x%px\n", VAR_0->write_ptr);
 FUNC_0("Queue Doorbell Pointer: 0x%p\n", VAR_0->doorbell_ptr);
 FUNC_0("Queue Doorbell Offset: %u\n", VAR_0->doorbell_off);
}
