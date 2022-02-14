
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hidled_device {int lock; TYPE_1__* config; int * buf; int hdev; } ;
typedef int __u8 ;
struct TYPE_2__ {scalar_t__ report_type; int report_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int *,int ,int ,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hidled_device *VAR_5, __u8 *VAR_6)
{
 int VAR_7;

 if (VAR_5->config->report_type != VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_5->lock);

 FUNC_1(VAR_5->buf, VAR_6, VAR_5->config->report_size);

 VAR_7 = FUNC_0(VAR_5->hdev, VAR_6[0], VAR_5->buf,
     VAR_5->config->report_size,
     VAR_1,
     VAR_3);
 if (VAR_7 < 0)
  goto err;

 VAR_7 = FUNC_0(VAR_5->hdev, VAR_6[0], VAR_5->buf,
     VAR_5->config->report_size,
     VAR_1,
     VAR_2);

 FUNC_1(VAR_6, VAR_5->buf, VAR_5->config->report_size);
err:
 FUNC_3(&VAR_5->lock);

 return VAR_7 < 0 ? VAR_7 : 0;
}
