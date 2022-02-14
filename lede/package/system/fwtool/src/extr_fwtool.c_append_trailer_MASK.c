
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwimage_trailer {int size; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fwimage_trailer*,int,int,int *) ;
 int FUNC_2 (struct fwimage_trailer*,struct fwimage_trailer*,int) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_0, struct fwimage_trailer *VAR_1)
{
 VAR_1->size = FUNC_0(VAR_1->size);
 FUNC_1(VAR_1, sizeof(*VAR_1), 1, VAR_0);
 FUNC_2(VAR_1, VAR_1, sizeof(*VAR_1));
}
