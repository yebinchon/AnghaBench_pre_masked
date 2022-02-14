
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_cfg_file {int dummy; } ;
typedef int files_count ;
typedef struct fw_cfg_file __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fw_cfg_file) ;
 int FUNC_1 (int ,struct fw_cfg_file*,int,size_t) ;
 int FUNC_2 (struct fw_cfg_file*) ;
 int FUNC_3 (struct fw_cfg_file*) ;
 struct fw_cfg_file* FUNC_4 (size_t,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_3 = 0;
 __be32 VAR_4;
 u32 VAR_5, VAR_6;
 struct fw_cfg_file *VAR_7;
 size_t VAR_8;

 VAR_3 = FUNC_1(VAR_1, &VAR_4,
   0, sizeof(VAR_4));
 if (VAR_3 < 0)
  return VAR_3;

 VAR_5 = FUNC_0(VAR_4);
 VAR_8 = VAR_5 * sizeof(struct fw_cfg_file);

 VAR_7 = FUNC_4(VAR_8, VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1, VAR_7,
   sizeof(VAR_4), VAR_8);
 if (VAR_3 < 0)
  goto end;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_3 = FUNC_2(&VAR_7[VAR_6]);
  if (VAR_3)
   break;
 }

end:
 FUNC_3(VAR_7);
 return VAR_3;
}
