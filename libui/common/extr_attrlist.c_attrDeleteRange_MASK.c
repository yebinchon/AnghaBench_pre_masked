
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiprivAttrList ;
struct attr {size_t start; size_t end; struct attr* next; } ;


 struct attr* FUNC_0 (int *,struct attr*) ;
 int FUNC_1 (struct attr*,size_t*,size_t*) ;

__attribute__((used)) static struct attr *FUNC_2(uiprivAttrList *VAR_0, struct attr *VAR_1, size_t VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;
 size_t VAR_6;

 VAR_4 = VAR_2;
 VAR_5 = VAR_3;
 VAR_6 = VAR_5 - VAR_4;

 if (!FUNC_1(VAR_1, &VAR_2, &VAR_3)) {


  if (VAR_1->start >= VAR_4)
   VAR_1->start -= VAR_6;
  if (VAR_1->end >= VAR_5)
   VAR_1->end -= VAR_6;
  return VAR_1->next;
 }




 if (VAR_1->start >= VAR_2 && VAR_1->end <= VAR_3)
  return FUNC_0(VAR_0, VAR_1);


 if (VAR_1->start == VAR_2) {


  VAR_1->start = VAR_3 - VAR_6;
  VAR_1->end -= VAR_6;
  return VAR_1->next;
 }
 if (VAR_1->end == VAR_3) {

  VAR_1->end = VAR_2;
  return VAR_1->next;
 }



 VAR_1->end -= VAR_6;
 return VAR_1->next;
}
