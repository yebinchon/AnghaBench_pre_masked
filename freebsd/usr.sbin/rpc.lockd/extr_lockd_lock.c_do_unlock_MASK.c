
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int flags; } ;
typedef enum partialfilelock_status { ____Placeholder_partialfilelock_status } partialfilelock_status ;
typedef enum nlm_stats { ____Placeholder_nlm_stats } nlm_stats ;


 int VAR_0 ;







 int FUNC_0 (char*) ;
 int FUNC_1 (struct file_lock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct file_lock*) ;

enum nlm_stats
FUNC_3(struct file_lock *VAR_8)
{
 enum partialfilelock_status VAR_9;
 enum nlm_stats VAR_10;

 FUNC_0("Entering do_unlock...\n");
 VAR_9 = FUNC_2(VAR_8);

 switch (VAR_9) {
 case 134:
  FUNC_0("PFL unlock granted");
  FUNC_1(VAR_8);
  VAR_10 = (VAR_8->flags & VAR_0) ? VAR_4 : VAR_7;
  break;
 case 130:
 case 133:
  FUNC_0("PFL_NFS unlock denied");
  FUNC_1(VAR_8);
  VAR_10 = (VAR_8->flags & VAR_0) ? VAR_1 : VAR_5;
  break;
 case 129:
 case 132:
  FUNC_0("PFL_NFS no lock found\n");
  VAR_10 = (VAR_8->flags & VAR_0) ? VAR_4 : VAR_7;
  break;
 case 128:
 case 131:
  FUNC_0("PFL unlock resource failure");
  FUNC_1(VAR_8);
  VAR_10 = (VAR_8->flags & VAR_0) ? VAR_2 : VAR_6;
  break;
 default:
  FUNC_0("PFL unlock *FAILED*");
  FUNC_1(VAR_8);
  VAR_10 = (VAR_8->flags & VAR_0) ? VAR_3 : VAR_5;
  break;
 }

 FUNC_0("Exiting do_unlock...\n");

 return VAR_10;
}
