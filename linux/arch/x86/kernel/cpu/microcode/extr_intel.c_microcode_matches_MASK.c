
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microcode_header_intel {unsigned long sig; } ;
struct extended_sigtable {int count; } ;
struct extended_signature {unsigned long sig; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct microcode_header_intel*) ;
 unsigned long FUNC_1 (struct microcode_header_intel*) ;
 unsigned int FUNC_2 (unsigned long) ;
 unsigned int FUNC_3 (unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct microcode_header_intel *VAR_2,
         unsigned long VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5 = FUNC_0(VAR_2);
 struct extended_sigtable *VAR_6;
 unsigned int VAR_7, VAR_8;
 struct extended_signature *VAR_9;
 unsigned int VAR_10, VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_2(VAR_3);
 VAR_11 = FUNC_3(VAR_3);

 VAR_7 = FUNC_2(VAR_2->sig);
 VAR_8 = FUNC_3(VAR_2->sig);

 if (VAR_10 == VAR_7 && VAR_11 == VAR_8)
  return 1;


 if (VAR_4 <= VAR_5 + VAR_1)
  return 0;

 VAR_6 = (void *) VAR_2 + VAR_5 + VAR_1;
 VAR_9 = (void *)VAR_6 + VAR_0;
 VAR_12 = VAR_6->count;

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_7 = FUNC_2(VAR_9->sig);
  VAR_8 = FUNC_3(VAR_9->sig);

  if (VAR_10 == VAR_7 && VAR_11 == VAR_8)
   return 1;

  VAR_9++;
 }
 return 0;
}
