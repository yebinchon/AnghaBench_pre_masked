
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_sysfs_entry {int dummy; } ;
struct dmi_read_state {int pos; int count; int buf; } ;
struct dmi_header {int dummy; } ;
typedef int ssize_t ;


 size_t FUNC_0 (struct dmi_header const*) ;
 int FUNC_1 (int ,int ,int *,struct dmi_header const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct dmi_sysfs_entry *VAR_0,
      const struct dmi_header *VAR_1,
      void *VAR_2)
{
 struct dmi_read_state *VAR_3 = VAR_2;
 size_t VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3->buf, VAR_3->count,
           &VAR_3->pos, VAR_1, VAR_4);
}
