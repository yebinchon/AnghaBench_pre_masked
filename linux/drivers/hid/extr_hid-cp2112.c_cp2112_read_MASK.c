
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;
struct cp2112_force_read_report {int report; int length; } ;
struct cp2112_device {size_t read_length; int read_data; int read_avail; struct hid_device* hdev; } ;
typedef int report ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hid_device*,int *,int,int ) ;
 int FUNC_2 (struct cp2112_device*,int *) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct hid_device*,char*,size_t,size_t) ;
 int FUNC_5 (struct hid_device*,char*,int) ;
 int FUNC_6 (int *,int ,size_t) ;

__attribute__((used)) static int FUNC_7(struct cp2112_device *VAR_2, u8 *VAR_3, size_t VAR_4)
{
 struct hid_device *VAR_5 = VAR_2->hdev;
 struct cp2112_force_read_report VAR_6;
 int VAR_7;

 if (VAR_4 > sizeof(VAR_2->read_data))
  VAR_4 = sizeof(VAR_2->read_data);
 VAR_6.report = VAR_0;
 VAR_6.length = FUNC_3(VAR_4);

 FUNC_0(&VAR_2->read_avail, 0);

 VAR_7 = FUNC_1(VAR_5, &VAR_6.report, sizeof(VAR_6),
    VAR_1);
 if (VAR_7 < 0) {
  FUNC_5(VAR_5, "Error requesting data: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_2, &VAR_2->read_avail);
 if (VAR_7)
  return VAR_7;

 FUNC_4(VAR_5, "read %d of %zd bytes requested\n",
  VAR_2->read_length, VAR_4);

 if (VAR_4 > VAR_2->read_length)
  VAR_4 = VAR_2->read_length;

 FUNC_6(VAR_3, VAR_2->read_data, VAR_4);
 return VAR_2->read_length;
}
