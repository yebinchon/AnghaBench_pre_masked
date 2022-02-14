
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rtl8366_smi {TYPE_2__* parent; } ;
struct rtl8366_platform_data {unsigned int num_initvals; TYPE_1__* initvals; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {struct device_node* of_node; struct rtl8366_platform_data* platform_data; } ;
struct TYPE_3__ {int val; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8366_smi*,int ,int ,int ) ;
 int FUNC_1 (struct rtl8366_smi*,int ,int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int * FUNC_4 (struct device_node*,char*,unsigned int*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct rtl8366_smi*,int) ;
 int FUNC_7 (struct rtl8366_smi*,unsigned int,int) ;

__attribute__((used)) static int FUNC_8(struct rtl8366_smi *VAR_11)
{
 struct rtl8366_platform_data *VAR_12;
 int VAR_13;
 unsigned VAR_14;






 VAR_12 = VAR_11->parent->platform_data;
 if (VAR_12 && VAR_12->num_initvals && VAR_12->initvals) {
  FUNC_3(VAR_11->parent, "applying initvals\n");
  for (VAR_14 = 0; VAR_14 < VAR_12->num_initvals; VAR_14++)
   FUNC_1(VAR_11, VAR_12->initvals[VAR_14].reg,
          VAR_12->initvals[VAR_14].val);
 }
 FUNC_0(VAR_11, VAR_3, VAR_5,
  VAR_4);


 FUNC_1(VAR_11, VAR_6, 0);


 FUNC_1(VAR_11, VAR_7, 0);





 FUNC_1(VAR_11, VAR_10, VAR_2);


 FUNC_0(VAR_11, VAR_8, VAR_9, 0);

 return 0;
}
