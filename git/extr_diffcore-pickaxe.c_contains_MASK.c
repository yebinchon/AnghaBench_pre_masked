
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kwsmatch {scalar_t__* size; } ;
struct TYPE_5__ {scalar_t__ rm_eo; scalar_t__ rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;
struct TYPE_6__ {unsigned long size; char* ptr; } ;
typedef TYPE_2__ mmfile_t ;
typedef int kwset_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,char const*,unsigned long,struct kwsmatch*) ;
 int FUNC_1 (int *,char const*,unsigned long,int,TYPE_1__*,int) ;

__attribute__((used)) static unsigned int FUNC_2(mmfile_t *VAR_1, regex_t *VAR_2, kwset_t VAR_3)
{
 unsigned int VAR_4;
 unsigned long VAR_5;
 const char *VAR_6;

 VAR_5 = VAR_1->size;
 VAR_6 = VAR_1->ptr;
 VAR_4 = 0;

 if (VAR_2) {
  regmatch_t VAR_7;
  int VAR_8 = 0;

  while (VAR_5 && *VAR_6 &&
         !FUNC_1(VAR_2, VAR_6, VAR_5, 1, &VAR_7, VAR_8)) {
   VAR_8 |= VAR_0;
   VAR_6 += VAR_7.rm_eo;
   VAR_5 -= VAR_7.rm_eo;
   if (VAR_5 && *VAR_6 && VAR_7.rm_so == VAR_7.rm_eo) {
    VAR_6++;
    VAR_5--;
   }
   VAR_4++;
  }

 } else {
  while (VAR_5) {
   struct kwsmatch VAR_9;
   size_t VAR_10 = FUNC_0(VAR_3, VAR_6, VAR_5, &VAR_9);
   if (VAR_10 == -1)
    break;
   VAR_5 -= VAR_10 + VAR_9.size[0];
   VAR_6 += VAR_10 + VAR_9.size[0];
   VAR_4++;
  }
 }
 return VAR_4;
}
