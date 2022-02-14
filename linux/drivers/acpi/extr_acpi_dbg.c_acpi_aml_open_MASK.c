
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; } ;
typedef int acpi_status ;
struct TYPE_5__ {scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_4__ {scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_6__ {int flags; int lock; int users; TYPE_2__ in_crc; TYPE_1__ out_crc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct file* VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_9, struct file *VAR_10)
{
 int VAR_11 = 0;
 acpi_status VAR_12;

 FUNC_2(&VAR_8.lock);




 if (VAR_8.flags & VAR_0) {
  VAR_11 = -VAR_2;
  goto err_lock;
 }
 if ((VAR_10->f_flags & VAR_5) != VAR_6) {




  if (VAR_7) {
   VAR_11 = -VAR_2;
   goto err_lock;
  } else {
   FUNC_4("Opening debugger reader.\n");
   VAR_7 = VAR_10;
  }
 } else {




  if (!(VAR_8.flags & VAR_1)) {
   VAR_11 = -VAR_4;
   goto err_lock;
  }
 }
 if (VAR_7 == VAR_10) {
  FUNC_4("Opening debugger interface.\n");
  FUNC_3(&VAR_8.lock);

  FUNC_4("Initializing debugger thread.\n");
  VAR_12 = FUNC_1();
  if (FUNC_0(VAR_12)) {
   FUNC_5("Failed to initialize debugger.\n");
   VAR_11 = -VAR_3;
   goto err_exit;
  }
  FUNC_4("Debugger thread initialized.\n");

  FUNC_2(&VAR_8.lock);
  VAR_8.flags |= VAR_1;
  VAR_8.out_crc.head = VAR_8.out_crc.tail = 0;
  VAR_8.in_crc.head = VAR_8.in_crc.tail = 0;
  FUNC_4("Debugger interface opened.\n");
 }
 VAR_8.users++;
err_lock:
 if (VAR_11 < 0) {
  if (VAR_7 == VAR_10)
   VAR_7 = ((void*)0);
 }
 FUNC_3(&VAR_8.lock);
err_exit:
 return VAR_11;
}
