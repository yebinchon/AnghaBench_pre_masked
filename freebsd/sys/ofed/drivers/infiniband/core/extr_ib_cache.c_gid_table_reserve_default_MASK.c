
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int gid_type; } ;
struct ib_gid_table_entry {TYPE_1__ attr; int props; } ;
struct ib_gid_table {unsigned int sz; struct ib_gid_table_entry* data_vec; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned long*,int ,unsigned int) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_2, u8 VAR_3,
         struct ib_gid_table *VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8 = 0;

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 VAR_7 = FUNC_1(VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_7 && VAR_5 < VAR_4->sz; VAR_5++) {
  struct ib_gid_table_entry *VAR_9 =
   &VAR_4->data_vec[VAR_5];

  VAR_9->props |= VAR_1;
  VAR_8 = FUNC_0(&VAR_6,
         VAR_0,
         VAR_8);
  VAR_9->attr.gid_type = VAR_8++;
 }

 return 0;
}
