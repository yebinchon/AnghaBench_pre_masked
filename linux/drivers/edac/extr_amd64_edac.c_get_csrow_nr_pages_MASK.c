
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct amd64_pvt {int dbam1; int dbam0; TYPE_1__* ops; int umc; } ;
struct TYPE_2__ {int (* dbam_to_cs ) (struct amd64_pvt*,int ,int,int) ;} ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int,int ,struct amd64_pvt*) ;
 int FUNC_3 (struct amd64_pvt*,int ,int,int) ;

__attribute__((used)) static u32 FUNC_4(struct amd64_pvt *VAR_1, u8 VAR_2, int VAR_3)
{
 u32 VAR_4 = VAR_2 ? VAR_1->dbam1 : VAR_1->dbam0;
 int VAR_5 = VAR_3;
 u32 VAR_6, VAR_7;

 if (!VAR_1->umc) {
  VAR_5 >>= 1;
  VAR_6 = FUNC_0(VAR_5, VAR_4);
 } else {
  VAR_6 = FUNC_2(VAR_5 >> 1, VAR_2, VAR_1);
 }

 VAR_7 = VAR_1->ops->dbam_to_cs(VAR_1, VAR_2, VAR_6, VAR_5);
 VAR_7 <<= 20 - VAR_0;

 FUNC_1(0, "csrow: %d, channel: %d, DBAM idx: %d\n",
      VAR_3, VAR_2, VAR_6);
 FUNC_1(0, "nr_pages/channel: %u\n", VAR_7);

 return VAR_7;
}
