
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Md5_Root; } ;
typedef TYPE_1__ volume_t ;
struct TYPE_7__ {unsigned long long offset; } ;
typedef TYPE_2__ md5_tree_t ;


 unsigned long long const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,unsigned long long,unsigned long long*) ;
 TYPE_2__* FUNC_1 (int ,unsigned char*) ;
 int FUNC_2 (int,char*,unsigned long long const) ;

__attribute__((used)) static int FUNC_3 (volume_t *VAR_4, unsigned char VAR_5[16], unsigned long long VAR_6, unsigned long long *VAR_7) {
  int VAR_8 = FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_7);
  if (!VAR_8 || VAR_8 == VAR_2) {
    return VAR_8;
  }
  FUNC_2 (3, "md5_doc_idx_lookup returns exit code %d.\n", VAR_8);

  md5_tree_t *VAR_9 = FUNC_1 (VAR_4->Md5_Root, VAR_5);
  if (VAR_9 == ((void*)0)) {
    return VAR_1;
  }

  const unsigned long long VAR_10 = VAR_9->offset;
  FUNC_2 (4, "pos = %llx\n", VAR_10);

  if ((VAR_6 ^ VAR_10) & VAR_3) {
    return VAR_2;
  }

  *VAR_7 = VAR_10 & VAR_0;

  return 0;
}
