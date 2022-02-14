
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwimage_trailer {int size; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,struct fwimage_trailer*,int ) ;
 int FUNC_1 (int ,struct fwimage_trailer*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct fwimage_trailer *VAR_4)
{
 if (!VAR_3)
  return 0;

 VAR_4->type = VAR_0;
 VAR_4->size = sizeof(*VAR_4);

 if (FUNC_0(VAR_3, VAR_2, VAR_4, VAR_1))
  return 1;

 FUNC_1(VAR_2, VAR_4);

 return 0;
}
