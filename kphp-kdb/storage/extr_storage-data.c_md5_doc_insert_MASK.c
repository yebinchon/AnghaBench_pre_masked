
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int docs; int Md5_Root; } ;
typedef TYPE_1__ volume_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int ,unsigned long long*) ;
 int FUNC_2 (int ,unsigned char*,int ,unsigned long long) ;
 int VAR_3 ;
 int FUNC_3 (int,char*,unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_4 (volume_t *VAR_4, unsigned char VAR_5[16], unsigned long long VAR_6, unsigned long long VAR_7) {
  FUNC_3 (3, "md5_doc_insert (secret = %llx, file_pos = %llx)\n", VAR_6, VAR_7);
  unsigned long long VAR_8;
  int VAR_9 = FUNC_1 (VAR_4, VAR_5, 0, &VAR_8);
  if (!VAR_9 || VAR_9 == VAR_1) {
    return VAR_0;
  }
  VAR_4->Md5_Root = FUNC_2 (VAR_4->Md5_Root, VAR_5, FUNC_0 (), VAR_7 | (VAR_6 & VAR_2));
  VAR_4->docs++;
  VAR_3++;
  return 0;
}
