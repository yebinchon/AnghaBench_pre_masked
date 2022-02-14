
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_state {scalar_t__ conn; scalar_t__ role; scalar_t__ disk; } ;
struct drbd_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_0(struct drbd_device *VAR_8,
     union drbd_state VAR_9, union drbd_state VAR_10)
{
 return (VAR_9.conn >= VAR_0 && VAR_10.conn >= VAR_0 &&
   ((VAR_9.role != VAR_7 && VAR_10.role == VAR_7) ||
    (VAR_9.conn != VAR_3 && VAR_10.conn == VAR_3) ||
    (VAR_9.conn != VAR_2 && VAR_10.conn == VAR_2) ||
    (VAR_9.disk != VAR_6 && VAR_10.disk == VAR_6))) ||
  (VAR_9.conn >= VAR_0 && VAR_10.conn == VAR_1) ||
  (VAR_9.conn == VAR_0 && VAR_10.conn == VAR_4) ||
  (VAR_9.conn == VAR_0 && VAR_10.conn == VAR_5);
}
