
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cper_sec_mem_err {int mem_dev_handle; int mem_array_handle; int rank; int target_id; int responder_id; int requestor_id; int bit_pos; int column; int row; int device; int bank; int module; int card; int node; int validation_bits; } ;
struct cper_mem_err_compact {int mem_dev_handle; int mem_array_handle; int rank; int target_id; int responder_id; int requestor_id; int bit_pos; int column; int row; int device; int bank; int module; int card; int node; int validation_bits; } ;



void FUNC_0(const struct cper_sec_mem_err *VAR_0,
         struct cper_mem_err_compact *VAR_1)
{
 VAR_1->validation_bits = VAR_0->validation_bits;
 VAR_1->node = VAR_0->node;
 VAR_1->card = VAR_0->card;
 VAR_1->module = VAR_0->module;
 VAR_1->bank = VAR_0->bank;
 VAR_1->device = VAR_0->device;
 VAR_1->row = VAR_0->row;
 VAR_1->column = VAR_0->column;
 VAR_1->bit_pos = VAR_0->bit_pos;
 VAR_1->requestor_id = VAR_0->requestor_id;
 VAR_1->responder_id = VAR_0->responder_id;
 VAR_1->target_id = VAR_0->target_id;
 VAR_1->rank = VAR_0->rank;
 VAR_1->mem_array_handle = VAR_0->mem_array_handle;
 VAR_1->mem_dev_handle = VAR_0->mem_dev_handle;
}
