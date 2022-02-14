
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wr_msg_ctl_info {int link; } ;
struct pci_dev {int dev; } ;
struct ishtp_msg_hdr {int dummy; } ;
struct ishtp_device {scalar_t__ mtu; int * devc; int * ops; int wr_free_list; int wr_processing_list; int wr_processing_spinlock; int wait_hw_ready; } ;
struct ish_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 void* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct ishtp_device*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

struct ishtp_device *FUNC_7(struct pci_dev *VAR_4)
{
 struct ishtp_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(&VAR_4->dev,
      sizeof(struct ishtp_device) + sizeof(struct ish_hw),
      VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_4(VAR_5);

 FUNC_3(&VAR_5->wait_hw_ready);

 FUNC_6(&VAR_5->wr_processing_spinlock);


 FUNC_0(&VAR_5->wr_processing_list);
 FUNC_0(&VAR_5->wr_free_list);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct wr_msg_ctl_info *VAR_7;

  VAR_7 = FUNC_2(&VAR_4->dev,
          sizeof(struct wr_msg_ctl_info),
          VAR_0);
  if (!VAR_7) {




   FUNC_1(VAR_5->devc,
    "[ishtp-ish]: failure in Tx FIFO allocations (%d)\n",
    VAR_6);
   break;
  }
  FUNC_5(&VAR_7->link, &VAR_5->wr_free_list);
 }

 VAR_5->ops = &VAR_3;
 VAR_5->devc = &VAR_4->dev;
 VAR_5->mtu = VAR_1 - sizeof(struct ishtp_msg_hdr);
 return VAR_5;
}
