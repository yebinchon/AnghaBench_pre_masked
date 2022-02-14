
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int size; } ;
typedef TYPE_1__ obj_hdr ;
typedef int inflated ;
typedef int git_zstream ;
struct TYPE_6__ {int type; int len; } ;
typedef TYPE_2__ git_rawobj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned char*,size_t*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;
 int FUNC_4 (TYPE_1__*,size_t*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5(
 git_rawobj *VAR_3, const unsigned char *VAR_4, size_t VAR_5)
{
 git_zstream VAR_6 = VAR_1;
 obj_hdr VAR_7;
 unsigned char VAR_8[VAR_2];
 size_t VAR_9, VAR_10 = sizeof(VAR_8);
 int VAR_11;

 if ((VAR_11 = FUNC_2(&VAR_6, VAR_0)) < 0 ||
  (VAR_11 = FUNC_3(&VAR_6, VAR_4, VAR_5)) < 0 ||
  (VAR_11 = FUNC_1(VAR_8, &VAR_10, &VAR_6)) < 0 ||
  (VAR_11 = FUNC_4(&VAR_7, &VAR_9, VAR_8, VAR_10)) < 0)
  goto done;

 VAR_3->len = VAR_7.size;
 VAR_3->type = VAR_7.type;

done:
 FUNC_0(&VAR_6);
 return VAR_11;
}
