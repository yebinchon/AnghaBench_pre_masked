
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_7__ {int* ptr; size_t size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char const*) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_1__*,int*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int ) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 const char *VAR_4 = "8e73b769e97678d684b809b163bebdae2911720f",
       *VAR_5 = "objects/8e/73b769e97678d684b809b163bebdae2911720f";
 git_buf VAR_6 = VAR_0, VAR_7 = VAR_0;
 git_oid VAR_8;
 git_object *VAR_9;
 size_t VAR_10;

 FUNC_1(FUNC_8(&VAR_8, VAR_4));
 FUNC_1(FUNC_3(&VAR_6, FUNC_9(VAR_3), VAR_5));
 FUNC_1(FUNC_4(&VAR_7, VAR_6.ptr));


 for (VAR_10 = 0; VAR_10 < VAR_7.size; VAR_10++) {
  VAR_7.ptr[VAR_10] ^= 0x1;
  FUNC_1(FUNC_5(&VAR_7, VAR_6.ptr, VAR_2, 0644));
  FUNC_0(FUNC_7(&VAR_9, VAR_3, &VAR_8, VAR_1));
  VAR_7.ptr[VAR_10] ^= 0x1;
 }


 FUNC_1(FUNC_5(&VAR_7, VAR_6.ptr, VAR_2, 0644));
 FUNC_1(FUNC_7(&VAR_9, VAR_3, &VAR_8, VAR_1));

 FUNC_6(VAR_9);
 FUNC_2(&VAR_6);
 FUNC_2(&VAR_7);
}
