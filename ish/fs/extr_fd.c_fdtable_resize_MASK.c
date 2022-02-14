
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdtable {unsigned int size; struct fd** cloexec; struct fd** files; } ;
struct fd {int dummy; } ;
typedef struct fd* bits_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fd**) ;
 struct fd** FUNC_3 (int) ;
 int FUNC_4 (struct fd**,struct fd**,int) ;
 int FUNC_5 (struct fd**,int ,int) ;

__attribute__((used)) static int FUNC_6(struct fdtable *VAR_1, unsigned VAR_2) {

    FUNC_1(VAR_2 > VAR_1->size);

    struct fd **VAR_3 = FUNC_3(sizeof(struct fd *) * VAR_2);
    if (VAR_3 == ((void*)0))
        return VAR_0;
    FUNC_5(VAR_3, 0, sizeof(struct fd *) * VAR_2);
    if (VAR_1->files)
        FUNC_4(VAR_3, VAR_1->files, sizeof(struct fd *) * VAR_1->size);

    bits_t *VAR_4 = FUNC_3(FUNC_0(VAR_2));
    if (VAR_4 == ((void*)0)) {
        FUNC_2(VAR_3);
        return VAR_0;
    }
    FUNC_5(VAR_4, 0, FUNC_0(VAR_2));
    if (VAR_1->cloexec)
        FUNC_4(VAR_4, VAR_1->cloexec, FUNC_0(VAR_1->size));

    FUNC_2(VAR_1->files);
    VAR_1->files = VAR_3;
    FUNC_2(VAR_1->cloexec);
    VAR_1->cloexec = VAR_4;
    VAR_1->size = VAR_2;
    return 0;
}
