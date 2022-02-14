
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct gb_interface {int quirks; int interface_id; int dev; struct gb_host_device* hd; } ;
struct gb_host_device {int svc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gb_interface *VAR_10)
{
 struct gb_host_device *VAR_11 = VAR_10->hd;
 unsigned long VAR_12;
 unsigned long VAR_13;
 int VAR_14;
 u32 VAR_15;
 u16 VAR_16;
 u8 VAR_17;






 if (VAR_10->quirks & VAR_8)
  VAR_16 = VAR_2;
 else
  VAR_16 = VAR_1;

 VAR_14 = FUNC_1(VAR_11->svc, VAR_10->interface_id, VAR_16,
      VAR_0, &VAR_15);
 if (VAR_14)
  return VAR_14;





 if (!VAR_15) {
  FUNC_0(&VAR_10->dev, "invalid init status\n");
  return -VAR_3;
 }
 if (VAR_10->quirks & VAR_8)
  VAR_17 = VAR_15 & 0xff;
 else
  VAR_17 = VAR_15 >> 24;





 VAR_12 = VAR_7 |
    VAR_4 |
    VAR_5 |
    VAR_6;

 VAR_13 = VAR_9;

 switch (VAR_17) {
 case 129:
 case 130:
  VAR_10->quirks |= VAR_12;
  break;
 case 128:

  VAR_10->quirks &= ~VAR_12;
  VAR_10->quirks |= VAR_13;
  break;
 default:
  VAR_10->quirks &= ~VAR_12;
  VAR_10->quirks &= ~VAR_13;
 }


 return FUNC_2(VAR_11->svc, VAR_10->interface_id, VAR_16,
       VAR_0, 0);
}
