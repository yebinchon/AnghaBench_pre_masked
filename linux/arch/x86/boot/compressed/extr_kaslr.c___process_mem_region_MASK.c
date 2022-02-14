
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_vector {unsigned long start; unsigned long size; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct mem_vector*,struct mem_vector*) ;
 int VAR_4 ;
 unsigned long FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (struct mem_vector*,unsigned long) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_5(struct mem_vector *VAR_6,
     unsigned long VAR_7,
     unsigned long VAR_8)
{
 struct mem_vector VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12;
 struct mem_vector VAR_13;


 if (FUNC_1(VAR_1) && VAR_6->start >= VAR_2)
  return;


 if (VAR_6->start + VAR_6->size < VAR_7)
  return;


 VAR_12 = FUNC_3(VAR_6->size + VAR_6->start, VAR_4);
 if (VAR_6->start >= VAR_12)
  return;
 VAR_13.start = VAR_6->start;
 VAR_13.size = VAR_12 - VAR_6->start;

 VAR_9.start = VAR_13.start;
 VAR_9.size = VAR_13.size;


 while (VAR_5 < VAR_3) {
  VAR_11 = VAR_9.start;


  if (VAR_9.start < VAR_7)
   VAR_9.start = VAR_7;


  VAR_9.start = FUNC_0(VAR_9.start, VAR_0);


  if (VAR_9.start > VAR_13.start + VAR_13.size)
   return;


  VAR_9.size -= VAR_9.start - VAR_11;


  if (FUNC_1(VAR_1) &&
      VAR_9.start + VAR_9.size > VAR_2)
   VAR_9.size = VAR_2 - VAR_9.start;


  if (VAR_9.size < VAR_8)
   return;


  if (!FUNC_2(&VAR_9, &VAR_10)) {
   FUNC_4(&VAR_9, VAR_8);
   return;
  }


  if (VAR_10.start > VAR_9.start + VAR_8) {
   struct mem_vector VAR_14;

   VAR_14.start = VAR_9.start;
   VAR_14.size = VAR_10.start - VAR_9.start;
   FUNC_4(&VAR_14, VAR_8);
  }


  if (VAR_10.start + VAR_10.size >= VAR_9.start + VAR_9.size)
   return;


  VAR_9.size -= VAR_10.start - VAR_9.start + VAR_10.size;
  VAR_9.start = VAR_10.start + VAR_10.size;
 }
}
