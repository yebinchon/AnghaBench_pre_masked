
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_buffer {scalar_t__ capacity; char* data; int wait; int size; struct packet* tail; int lost_packet_count; int total_packet_count; } ;
struct packet {size_t length; char* data; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,void*,size_t) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct packet_buffer *VAR_0, void *VAR_1, size_t VAR_2)
{
 char *VAR_3;

 VAR_0->total_packet_count++;

 if (VAR_0->capacity <
     FUNC_1(&VAR_0->size) + sizeof(struct packet) + VAR_2) {
  VAR_0->lost_packet_count++;
  return;
 }

 VAR_3 = VAR_0->data + VAR_0->capacity;
 VAR_0->tail->length = VAR_2;

 if (&VAR_0->tail->data[VAR_2] < VAR_3) {
  FUNC_2(VAR_0->tail->data, VAR_1, VAR_2);
  VAR_0->tail = (struct packet *) &VAR_0->tail->data[VAR_2];
 } else {
  size_t VAR_4 = VAR_3 - VAR_0->tail->data;

  FUNC_2(VAR_0->tail->data, VAR_1, VAR_4);
  FUNC_2(VAR_0->data, VAR_1 + VAR_4, VAR_2 - VAR_4);
  VAR_0->tail = (struct packet *) &VAR_0->data[VAR_2 - VAR_4];
 }



 FUNC_0(sizeof(struct packet) + VAR_2, &VAR_0->size);
 FUNC_3(&VAR_0->wait);
}
