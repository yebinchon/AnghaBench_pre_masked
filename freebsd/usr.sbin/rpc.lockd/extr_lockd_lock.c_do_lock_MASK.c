
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
 int FUNC_2 (struct file_lock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

enum nlm_stats
FUNC_3(struct file_lock *VAR_10)
{
 enum partialfilelock_status VAR_11;
 enum nlm_stats VAR_12;

 FUNC_0("Entering do_lock...\n");

 VAR_11 = FUNC_2(VAR_10);

 switch (VAR_11) {
 case 135:
  FUNC_0("PFL lock granted");
  FUNC_1(VAR_10);
  VAR_12 = (VAR_10->flags & VAR_0) ? VAR_5 : VAR_9;
  break;
 case 134:
  FUNC_0("PFL lock granted--duplicate id detected");
  FUNC_1(VAR_10);
  VAR_12 = (VAR_10->flags & VAR_0) ? VAR_5 : VAR_9;
  break;
 case 129:
 case 132:
  FUNC_0("PFL_NFS lock denied");
  FUNC_1(VAR_10);
  VAR_12 = (VAR_10->flags & VAR_0) ? VAR_2 : VAR_7;
  break;
 case 130:
 case 133:
  FUNC_0("PFL_NFS blocking lock denied.  Queued.\n");
  FUNC_1(VAR_10);
  VAR_12 = (VAR_10->flags & VAR_0) ? VAR_1 : VAR_6;
  break;
 case 128:
 case 131:
  FUNC_0("PFL lock resource alocation fail\n");
  FUNC_1(VAR_10);
  VAR_12 = (VAR_10->flags & VAR_0) ? VAR_3 : VAR_8;
  break;
 default:
  FUNC_0("PFL lock *FAILED*");
  FUNC_1(VAR_10);
  VAR_12 = (VAR_10->flags & VAR_0) ? VAR_4 : VAR_7;
  break;
 }

 FUNC_0("Exiting do_lock...\n");

 return VAR_12;
}
