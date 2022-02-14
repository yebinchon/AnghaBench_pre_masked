
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int size; } ;
typedef TYPE_1__ obj_hdr ;
struct TYPE_6__ {int type; int len; } ;
typedef TYPE_2__ git_rawobj ;


 int FUNC_0 (TYPE_1__*,size_t*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_1(
 git_rawobj *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 obj_hdr VAR_3;
 size_t VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_0(&VAR_3, &VAR_4, VAR_1, VAR_2)) < 0)
  return VAR_5;

 VAR_0->len = VAR_3.size;
 VAR_0->type = VAR_3.type;

 return VAR_5;
}
