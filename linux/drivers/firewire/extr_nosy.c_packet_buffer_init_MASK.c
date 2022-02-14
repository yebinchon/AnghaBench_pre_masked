
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_buffer {size_t capacity; int wait; int size; scalar_t__ lost_packet_count; int * data; struct packet* tail; struct packet* head; } ;
struct packet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t,int ) ;

__attribute__((used)) static int
FUNC_3(struct packet_buffer *VAR_2, size_t VAR_3)
{
 VAR_2->data = FUNC_2(VAR_3, VAR_1);
 if (VAR_2->data == ((void*)0))
  return -VAR_0;
 VAR_2->head = (struct packet *) VAR_2->data;
 VAR_2->tail = (struct packet *) VAR_2->data;
 VAR_2->capacity = VAR_3;
 VAR_2->lost_packet_count = 0;
 FUNC_0(&VAR_2->size, 0);
 FUNC_1(&VAR_2->wait);

 return 0;
}
