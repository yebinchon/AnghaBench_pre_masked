
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsl2563_chip {int high_thres; int low_thres; int client; TYPE_1__* gainlevel; } ;
struct TYPE_2__ {int gaintime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct tsl2563_chip *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6->client,
   VAR_0 | VAR_5,
   VAR_6->gainlevel->gaintime);
 if (VAR_7)
  goto error_ret;
 VAR_7 = FUNC_0(VAR_6->client,
   VAR_0 | VAR_2,
   VAR_6->high_thres & 0xFF);
 if (VAR_7)
  goto error_ret;
 VAR_7 = FUNC_0(VAR_6->client,
   VAR_0 | VAR_1,
   (VAR_6->high_thres >> 8) & 0xFF);
 if (VAR_7)
  goto error_ret;
 VAR_7 = FUNC_0(VAR_6->client,
   VAR_0 | VAR_4,
   VAR_6->low_thres & 0xFF);
 if (VAR_7)
  goto error_ret;
 VAR_7 = FUNC_0(VAR_6->client,
   VAR_0 | VAR_3,
   (VAR_6->low_thres >> 8) & 0xFF);




error_ret:
 return VAR_7;
}
