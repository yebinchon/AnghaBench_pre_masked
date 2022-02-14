
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_args {int flags; int sotype; void* wsize; void* rsize; int version; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,struct nfs_args*) ;

__attribute__((used)) static void
FUNC_1(struct nfs_args *VAR_6, char *VAR_7)
{
 VAR_6->version = VAR_4;
 VAR_6->rsize = VAR_0;
 VAR_6->wsize = VAR_0;
 VAR_6->flags = VAR_2 | VAR_3 | VAR_1;
 VAR_6->sotype = VAR_5;
 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_7, VAR_6);
}
