
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct finfo {char* name; int size; } ;
struct buf {int size; int start; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,int,int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct finfo *VAR_3, struct buf *VAR_4)
{
    FILE *VAR_5;

    VAR_5 = FUNC_1(VAR_3->name, "r");
    if (!VAR_5) {
 FUNC_2(VAR_2, "could not open \"%s\" for reading\n", VAR_3->name);
 FUNC_4(VAR_0);
    }

    VAR_4->size = FUNC_3(VAR_4->start, 1, VAR_3->size, VAR_5);
    if (VAR_4->size != VAR_3->size) {
 FUNC_2(VAR_2, "unable to read from file \"%s\"\n", VAR_3->name);
 FUNC_4(VAR_0);
    }

    FUNC_0(VAR_5);

    return VAR_1;
}
