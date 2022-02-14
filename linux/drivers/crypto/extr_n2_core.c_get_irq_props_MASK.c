
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct spu_mdesc_info {int num_intrs; struct ino_blob* ino_table; } ;
struct mdesc_handle {int dummy; } ;
struct ino_blob {int intr; int ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ino_blob* FUNC_0 (int,int ) ;
 int * FUNC_1 (struct mdesc_handle*,int ,char*,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct mdesc_handle *VAR_3, u64 VAR_4,
    struct spu_mdesc_info *VAR_5)
{
 const u64 *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_3, VAR_4, "ino", &VAR_7);
 if (!VAR_6) {
  FUNC_2("NO 'ino'\n");
  return -VAR_0;
 }

 VAR_5->num_intrs = VAR_7 / sizeof(u64);
 VAR_5->ino_table = FUNC_0((sizeof(struct ino_blob) *
     VAR_5->num_intrs),
    VAR_2);
 if (!VAR_5->ino_table)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_intrs; VAR_8++) {
  struct ino_blob *VAR_9 = &VAR_5->ino_table[VAR_8];
  VAR_9->intr = VAR_8 + 1;
  VAR_9->ino = VAR_6[VAR_8];
 }

 return 0;
}
