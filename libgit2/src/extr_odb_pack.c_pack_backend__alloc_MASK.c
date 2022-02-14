
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * free; int * freshen; int * writepack; int * foreach; int * refresh; int * exists_prefix; int * exists; int * read_header; int * read_prefix; int * read; int version; } ;
struct pack_backend {TYPE_1__ parent; int packs; } ;


 int FUNC_0 (struct pack_backend*) ;
 int VAR_0 ;
 struct pack_backend* FUNC_1 (int,int) ;
 int FUNC_2 (struct pack_backend*) ;
 scalar_t__ FUNC_3 (int *,size_t,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_4(struct pack_backend **VAR_12, size_t VAR_13)
{
 struct pack_backend *VAR_14 = FUNC_1(1, sizeof(struct pack_backend));
 FUNC_0(VAR_14);

 if (FUNC_3(&VAR_14->packs, VAR_13, VAR_11) < 0) {
  FUNC_2(VAR_14);
  return -1;
 }

 VAR_14->parent.version = VAR_0;

 VAR_14->parent.read = &VAR_6;
 VAR_14->parent.read_prefix = &VAR_8;
 VAR_14->parent.read_header = &VAR_7;
 VAR_14->parent.exists = &VAR_1;
 VAR_14->parent.exists_prefix = &VAR_2;
 VAR_14->parent.refresh = &VAR_9;
 VAR_14->parent.foreach = &VAR_3;
 VAR_14->parent.writepack = &VAR_10;
 VAR_14->parent.freshen = &VAR_5;
 VAR_14->parent.free = &VAR_4;

 *VAR_12 = VAR_14;
 return 0;
}
