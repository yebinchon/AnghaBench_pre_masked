
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_dev {int sd_level; int refcount; int sd_flags; struct cdev* dev; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct smb_dev* FUNC_0 (int,int ,int) ;

__attribute__((used)) static struct smb_dev *
FUNC_1(struct cdev *VAR_4)
{
 struct smb_dev *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct smb_dev), VAR_0, VAR_1 | VAR_2);
 VAR_5->dev = VAR_4;
 VAR_5->sd_level = -1;
 VAR_5->sd_flags |= VAR_3;
 VAR_5->refcount = 1;
 return (VAR_5);
}
