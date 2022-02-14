
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hidled_device {TYPE_1__* config; int lock; int buf; int hdev; } ;
typedef int __u8 ;
struct TYPE_2__ {int report_size; scalar_t__ report_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hidled_device *VAR_6, __u8 *VAR_7)
{
 int VAR_8;

 FUNC_3(&VAR_6->lock);





 FUNC_2(VAR_6->buf, VAR_7, VAR_6->config->report_size);

 if (VAR_6->config->report_type == VAR_5)
  VAR_8 = FUNC_1(VAR_6->hdev, VAR_7[0], VAR_6->buf,
      VAR_6->config->report_size,
      VAR_2,
      VAR_3);
 else if (VAR_6->config->report_type == VAR_4)
  VAR_8 = FUNC_0(VAR_6->hdev, VAR_6->buf,
        VAR_6->config->report_size);
 else
  VAR_8 = -VAR_0;

 FUNC_4(&VAR_6->lock);

 if (VAR_8 < 0)
  return VAR_8;

 return VAR_8 == VAR_6->config->report_size ? 0 : -VAR_1;
}
