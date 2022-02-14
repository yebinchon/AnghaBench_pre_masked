
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbd {int force_release_mask; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (char*,scalar_t__,char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct atkbd *VAR_2, char *VAR_3)
{
 size_t VAR_4 = FUNC_0(VAR_3, VAR_1 - 1, "%*pbl",
          VAR_0, VAR_2->force_release_mask);

 VAR_3[VAR_4++] = '\n';
 VAR_3[VAR_4] = '\0';

 return VAR_4;
}
