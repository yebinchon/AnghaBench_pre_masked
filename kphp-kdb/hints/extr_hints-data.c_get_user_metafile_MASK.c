
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* metafile; int * aio; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

inline char *FUNC_3 (user *VAR_0) {
  if (VAR_0->aio != ((void*)0) || VAR_0->metafile == ((void*)0)) {
    return ((void*)0);
  }

  FUNC_2 (VAR_0);

  FUNC_1 (VAR_0);
  FUNC_0 (VAR_0);

  return VAR_0->metafile;
}
