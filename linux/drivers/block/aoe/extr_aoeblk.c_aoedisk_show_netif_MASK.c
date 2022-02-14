
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct gendisk {struct aoedev* private_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aoetgt {struct aoeif* ifs; } ;
struct aoeif {struct net_device* nd; } ;
struct aoedev {int ntargets; struct aoetgt** targets; } ;
typedef int ssize_t ;


 int FUNC_0 (struct net_device**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gendisk* FUNC_1 (struct device*) ;
 int FUNC_2 (struct net_device**,int ,int) ;
 int FUNC_3 (char*,scalar_t__,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
      struct device_attribute *VAR_3, char *VAR_4)
{
 struct gendisk *VAR_5 = FUNC_1(VAR_2);
 struct aoedev *VAR_6 = VAR_5->private_data;
 struct net_device *VAR_7[8], **VAR_8, **VAR_9, **VAR_10;
 struct aoetgt **VAR_11, **VAR_12;
 struct aoeif *VAR_13, *VAR_14;
 char *VAR_15;

 FUNC_2(VAR_7, 0, sizeof VAR_7);
 VAR_8 = VAR_7;
 VAR_10 = VAR_8 + FUNC_0(VAR_7);
 VAR_11 = VAR_6->targets;
 VAR_12 = VAR_11 + VAR_6->ntargets;
 for (; VAR_11 < VAR_12 && *VAR_11; VAR_11++) {
  VAR_13 = (*VAR_11)->ifs;
  VAR_14 = VAR_13 + VAR_0;
  for (; VAR_13 < VAR_14 && VAR_13->nd; VAR_13++) {
   for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++)
    if (*VAR_9 == VAR_13->nd)
     break;
   if (VAR_9 == VAR_8 && VAR_8 != VAR_10)
    *VAR_8++ = VAR_13->nd;
  }
 }

 VAR_10 = VAR_8;
 VAR_8 = VAR_7;
 if (*VAR_8 == ((void*)0))
  return FUNC_3(VAR_4, VAR_1, "none\n");
 for (VAR_15 = VAR_4; VAR_8 < VAR_10; VAR_8++)
  VAR_15 += FUNC_3(VAR_15, VAR_1 - (VAR_15-VAR_4), "%s%s",
   VAR_15 == VAR_4 ? "" : ",", (*VAR_8)->name);
 VAR_15 += FUNC_3(VAR_15, VAR_1 - (VAR_15-VAR_4), "\n");
 return VAR_15-VAR_4;
}
