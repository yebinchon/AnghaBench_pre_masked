
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct TYPE_3__ {struct device* dev; } ;
struct s10_priv {TYPE_2__* svc_bufs; TYPE_1__ client; } ;
struct fpga_manager {struct s10_priv* priv; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int lock; void* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (void*,char const*,size_t) ;
 int FUNC_3 (struct s10_priv*,int ,void*,size_t) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct fpga_manager *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct s10_priv *VAR_8 = VAR_5->priv;
 struct device *VAR_9 = VAR_8->client.dev;
 void *VAR_10;
 size_t VAR_11;
 int VAR_12;
 uint VAR_13;


 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
  if (!FUNC_4(VAR_3,
        &VAR_8->svc_bufs[VAR_13].lock))
   break;

 if (VAR_13 == VAR_2)
  return -VAR_1;

 VAR_11 = VAR_7 < VAR_4 ? VAR_7 : VAR_4;

 VAR_10 = VAR_8->svc_bufs[VAR_13].buf;
 FUNC_2(VAR_10, VAR_6, VAR_11);
 VAR_12 = FUNC_3(VAR_8, VAR_0,
          VAR_10, VAR_11);
 if (VAR_12 < 0) {
  FUNC_1(VAR_9,
   "Error while sending data to service layer (%d)", VAR_12);
  FUNC_0(VAR_3, &VAR_8->svc_bufs[VAR_13].lock);
  return VAR_12;
 }

 return VAR_11;
}
