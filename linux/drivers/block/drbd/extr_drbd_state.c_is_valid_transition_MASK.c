
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_state {scalar_t__ disk; int conn; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static enum drbd_state_rv
FUNC_1(union drbd_state VAR_3, union drbd_state VAR_4)
{
 enum drbd_state_rv VAR_5;

 VAR_5 = FUNC_0(VAR_3.conn, VAR_4.conn);


 if (VAR_4.disk == VAR_1 && VAR_3.disk == VAR_0)
  VAR_5 = VAR_2;

 return VAR_5;
}
