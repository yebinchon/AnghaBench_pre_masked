
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int super ;
struct log_writes_c {int super_done; int sectorsize; int logged_entries; } ;
struct log_write_super {int sectorsize; void* nr_entries; void* version; void* magic; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct log_writes_c*,struct log_write_super*,int,int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct log_writes_c *VAR_3)
{
 struct log_write_super VAR_4;

 VAR_4.magic = FUNC_2(VAR_0);
 VAR_4.version = FUNC_2(VAR_2);
 VAR_4.nr_entries = FUNC_2(VAR_3->logged_entries);
 VAR_4.sectorsize = FUNC_1(VAR_3->sectorsize);

 if (FUNC_4(VAR_3, &VAR_4, sizeof(VAR_4), ((void*)0), 0,
      VAR_1)) {
  FUNC_0("Couldn't write super");
  return -1;
 }





 FUNC_3(&VAR_3->super_done);

 return 0;
}
