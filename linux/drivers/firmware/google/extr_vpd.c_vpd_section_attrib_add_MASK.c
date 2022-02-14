
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vpd_section {int attribs; int kobj; } ;
struct TYPE_4__ {int mode; struct vpd_attrib_info* name; } ;
struct TYPE_5__ {struct vpd_attrib_info* private; int read; int size; TYPE_1__ attr; } ;
struct vpd_attrib_info {struct vpd_attrib_info* key; int list; TYPE_2__ bin_attr; int const* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct vpd_attrib_info*) ;
 struct vpd_attrib_info* FUNC_2 (int const*,int ,int ) ;
 struct vpd_attrib_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int const*,int ) ;

__attribute__((used)) static int FUNC_8(const u8 *VAR_4, u32 VAR_5,
      const u8 *VAR_6, u32 VAR_7,
      void *VAR_8)
{
 int VAR_9;
 struct vpd_section *VAR_10 = VAR_8;
 struct vpd_attrib_info *VAR_11;





 if (FUNC_7(VAR_4, VAR_5) != VAR_2)
  return VAR_2;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->key = FUNC_2(VAR_4, VAR_5, VAR_1);
 if (!VAR_11->key) {
  VAR_9 = -VAR_0;
  goto free_info;
 }

 FUNC_5(&VAR_11->bin_attr);
 VAR_11->bin_attr.attr.name = VAR_11->key;
 VAR_11->bin_attr.attr.mode = 0444;
 VAR_11->bin_attr.size = VAR_7;
 VAR_11->bin_attr.read = VAR_3;
 VAR_11->bin_attr.private = VAR_11;

 VAR_11->value = VAR_6;

 FUNC_0(&VAR_11->list);

 VAR_9 = FUNC_6(VAR_10->kobj, &VAR_11->bin_attr);
 if (VAR_9)
  goto free_info_key;

 FUNC_4(&VAR_11->list, &VAR_10->attribs);
 return 0;

free_info_key:
 FUNC_1(VAR_11->key);
free_info:
 FUNC_1(VAR_11);

 return VAR_9;
}
