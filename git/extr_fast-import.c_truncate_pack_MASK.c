
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashfile_checkpoint {int offset; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,struct hashfile_checkpoint*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct hashfile_checkpoint *VAR_2)
{
 if (FUNC_1(VAR_0, VAR_2))
  FUNC_0("cannot truncate pack to skip duplicate");
 VAR_1 = VAR_2->offset;
}
