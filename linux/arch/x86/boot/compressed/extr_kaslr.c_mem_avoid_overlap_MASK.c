
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct setup_data {unsigned long len; scalar_t__ next; } ;
struct mem_vector {unsigned long start; unsigned long size; } ;
struct TYPE_3__ {scalar_t__ setup_data; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct mem_vector* VAR_2 ;
 scalar_t__ FUNC_0 (struct mem_vector*,struct mem_vector*) ;

__attribute__((used)) static bool FUNC_1(struct mem_vector *VAR_3,
         struct mem_vector *VAR_4)
{
 int VAR_5;
 struct setup_data *VAR_6;
 unsigned long VAR_7 = VAR_3->start + VAR_3->size;
 bool VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_0(VAR_3, &VAR_2[VAR_5]) &&
      VAR_2[VAR_5].start < VAR_7) {
   *VAR_4 = VAR_2[VAR_5];
   VAR_7 = VAR_4->start;
   VAR_8 = 1;
  }
 }


 VAR_6 = (struct setup_data *)(unsigned long)VAR_1->hdr.setup_data;
 while (VAR_6) {
  struct mem_vector VAR_9;

  VAR_9.start = (unsigned long)VAR_6;
  VAR_9.size = sizeof(*VAR_6) + VAR_6->len;

  if (FUNC_0(VAR_3, &VAR_9) && (VAR_9.start < VAR_7)) {
   *VAR_4 = VAR_9;
   VAR_7 = VAR_4->start;
   VAR_8 = 1;
  }

  VAR_6 = (struct setup_data *)(unsigned long)VAR_6->next;
 }

 return VAR_8;
}
