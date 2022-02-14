
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct zpci_dev {int state; void* fid; void* fh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct zpci_dev*,void*) ;
 int FUNC_1 (struct zpci_dev*) ;
 struct zpci_dev* FUNC_2 (int,int ) ;
 int FUNC_3 (struct zpci_dev*) ;
 int FUNC_4 (int,char*,void*,int,...) ;

int FUNC_5(u32 VAR_4, u32 VAR_5, int VAR_6)
{
 struct zpci_dev *VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_4(3, "add fid:%x, fh:%x, c:%d\n", VAR_4, VAR_5, VAR_6);
 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  goto error;

 VAR_7->fh = VAR_5;
 VAR_7->fid = VAR_4;


 VAR_8 = FUNC_0(VAR_7, VAR_5);
 if (VAR_8)
  goto error;

 if (VAR_6)
  VAR_7->state = VAR_2;
 else
  VAR_7->state = VAR_3;

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8)
  goto error;
 return 0;

error:
 FUNC_4(0, "add fid:%x, rc:%d\n", VAR_4, VAR_8);
 FUNC_1(VAR_7);
 return VAR_8;
}
