
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct partition_meta_info {scalar_t__* volname; int uuid; } ;
struct parsed_partitions {TYPE_1__* parts; } ;
struct TYPE_2__ {int has_info; struct partition_meta_info info; } ;


 int FUNC_0 (int ,int,char*,int,int) ;

__attribute__((used)) static void FUNC_1(struct parsed_partitions *VAR_0, int VAR_1,
       u32 VAR_2)
{
 struct partition_meta_info *VAR_3 = &VAR_0->parts[VAR_1].info;

 FUNC_0(VAR_3->uuid, sizeof(VAR_3->uuid), "%08x-%02x", VAR_2,
   VAR_1);
 VAR_3->volname[0] = 0;
 VAR_0->parts[VAR_1].has_info = 1;
}
