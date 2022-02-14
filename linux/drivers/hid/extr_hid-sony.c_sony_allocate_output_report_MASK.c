
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sixaxis_output_report_01 {int dummy; } sixaxis_output_report_01 ;
struct sony_sc {int quirks; void* output_report_dmabuf; TYPE_1__* hdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct sony_sc *VAR_11)
{
 if ((VAR_11->quirks & VAR_10) ||
   (VAR_11->quirks & VAR_9))
  VAR_11->output_report_dmabuf =
   FUNC_0(&VAR_11->hdev->dev,
    sizeof(union sixaxis_output_report_01),
    VAR_6);
 else if (VAR_11->quirks & VAR_2)
  VAR_11->output_report_dmabuf = FUNC_0(&VAR_11->hdev->dev,
      VAR_1,
      VAR_6);
 else if (VAR_11->quirks & (VAR_3 | VAR_4))
  VAR_11->output_report_dmabuf = FUNC_0(&VAR_11->hdev->dev,
      VAR_0,
      VAR_6);
 else if (VAR_11->quirks & VAR_7)
  VAR_11->output_report_dmabuf = FUNC_0(&VAR_11->hdev->dev,
      VAR_8,
      VAR_6);
 else
  return 0;

 if (!VAR_11->output_report_dmabuf)
  return -VAR_5;

 return 0;
}
