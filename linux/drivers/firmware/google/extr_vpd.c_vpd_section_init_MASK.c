
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mode; scalar_t__ name; } ;
struct TYPE_6__ {size_t size; struct vpd_section* private; int read; TYPE_1__ attr; } ;
struct vpd_section {char const* name; int enabled; int baseaddr; scalar_t__ raw_name; TYPE_2__ bin_attr; int attribs; int kobj; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int ,size_t,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_9 (struct vpd_section*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(const char *VAR_6, struct vpd_section *VAR_7,
       phys_addr_t VAR_8, size_t VAR_9)
{
 int VAR_10;

 VAR_7->baseaddr = FUNC_4(VAR_8, VAR_9, VAR_3);
 if (!VAR_7->baseaddr)
  return -VAR_1;

 VAR_7->name = VAR_6;


 VAR_7->raw_name = FUNC_1(VAR_2, "%s_raw", VAR_6);
 if (!VAR_7->raw_name) {
  VAR_10 = -VAR_1;
  goto err_memunmap;
 }

 FUNC_6(&VAR_7->bin_attr);
 VAR_7->bin_attr.attr.name = VAR_7->raw_name;
 VAR_7->bin_attr.attr.mode = 0444;
 VAR_7->bin_attr.size = VAR_9;
 VAR_7->bin_attr.read = VAR_5;
 VAR_7->bin_attr.private = VAR_7;

 VAR_10 = FUNC_7(VAR_4, &VAR_7->bin_attr);
 if (VAR_10)
  goto err_free_raw_name;

 VAR_7->kobj = FUNC_3(VAR_6, VAR_4);
 if (!VAR_7->kobj) {
  VAR_10 = -VAR_0;
  goto err_sysfs_remove;
 }

 FUNC_0(&VAR_7->attribs);
 FUNC_9(VAR_7);

 VAR_7->enabled = 1;

 return 0;

err_sysfs_remove:
 FUNC_8(VAR_4, &VAR_7->bin_attr);
err_free_raw_name:
 FUNC_2(VAR_7->raw_name);
err_memunmap:
 FUNC_5(VAR_7->baseaddr);
 return VAR_10;
}
