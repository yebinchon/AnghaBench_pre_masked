
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsdvb_debugfs {int refcount; int lock; int stats_queue; } ;
struct smsdvb_client_t {int prt_isdb_stats_ex; int prt_isdb_stats; int prt_dvb_stats; struct smsdvb_debugfs* debug_data; int debugfs; struct smscore_device_t* coredev; } ;
struct smscore_device_t {int devpath; int is_usb_device; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 struct dentry* FUNC_2 (char*,int,int ,struct smsdvb_client_t*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct smsdvb_debugfs* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *) ;

int FUNC_9(struct smsdvb_client_t *VAR_10)
{
 struct smscore_device_t *VAR_11 = VAR_10->coredev;
 struct dentry *VAR_12;
 struct smsdvb_debugfs *VAR_13;

 if (!VAR_6 || !VAR_11->is_usb_device)
  return -VAR_0;

 VAR_10->debugfs = FUNC_1(VAR_11->devpath,
          VAR_6);
 if (FUNC_0(VAR_10->debugfs)) {
  FUNC_7("Unable to create debugfs %s directory.\n",
   VAR_11->devpath);
  return -VAR_0;
 }

 VAR_12 = FUNC_2("stats", VAR_3 | VAR_4, VAR_10->debugfs,
    VAR_10, &VAR_5);
 if (!VAR_12) {
  FUNC_3(VAR_10->debugfs);
  return -VAR_1;
 }

 VAR_13 = FUNC_6(sizeof(*VAR_10->debug_data), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_10->debug_data = VAR_13;
 VAR_10->prt_dvb_stats = VAR_7;
 VAR_10->prt_isdb_stats = VAR_8;
 VAR_10->prt_isdb_stats_ex = VAR_9;

 FUNC_4(&VAR_13->stats_queue);
 FUNC_8(&VAR_13->lock);
 FUNC_5(&VAR_13->refcount);

 return 0;
}
