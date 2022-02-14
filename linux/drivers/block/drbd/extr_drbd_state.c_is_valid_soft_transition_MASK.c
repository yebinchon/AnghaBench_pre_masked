
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_state {scalar_t__ conn; scalar_t__ disk; scalar_t__ role; scalar_t__ pdsk; } ;
struct drbd_connection {int flags; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static enum drbd_state_rv
FUNC_1(union drbd_state VAR_28, union drbd_state VAR_29, struct drbd_connection *VAR_30)
{
 enum drbd_state_rv VAR_31 = VAR_26;

 if ((VAR_29.conn == VAR_4 || VAR_29.conn == VAR_3) &&
     VAR_28.conn > VAR_0)
  VAR_31 = VAR_25;

 if (VAR_29.conn == VAR_1 && VAR_28.conn == VAR_2)
  VAR_31 = VAR_18;

 if (VAR_29.disk > VAR_13 && VAR_28.disk == VAR_14)
  VAR_31 = VAR_20;

 if (VAR_29.conn == VAR_10 && VAR_28.conn < VAR_7)
  VAR_31 = VAR_23;

 if (VAR_29.disk == VAR_15 && VAR_28.disk < VAR_15 && VAR_28.disk != VAR_13)
  VAR_31 = VAR_21;

 if (VAR_29.conn == VAR_1 && VAR_28.conn == VAR_7)
  VAR_31 = VAR_19;



 if (FUNC_0(VAR_27, &VAR_30->flags) &&
     !((VAR_29.conn == VAR_11 && VAR_28.conn == VAR_10) ||
       (VAR_29.conn >= VAR_0 && VAR_28.conn == VAR_11)))
  VAR_31 = VAR_19;




 if (VAR_28.role != VAR_17 && VAR_29.role == VAR_17
  && VAR_29.pdsk == VAR_16
  && VAR_29.disk != VAR_16 && VAR_29.disk != VAR_14
  && (VAR_29.conn <= VAR_12 || VAR_29.conn != VAR_28.conn))
   VAR_31 = VAR_19;

 if ((VAR_29.conn == VAR_8 || VAR_29.conn == VAR_9) && VAR_28.conn < VAR_0)
  VAR_31 = VAR_22;

 if ((VAR_29.conn == VAR_8 || VAR_29.conn == VAR_9) &&
     VAR_29.conn != VAR_28.conn && VAR_28.conn > VAR_0)
  VAR_31 = VAR_25;

 if ((VAR_29.conn == VAR_3 || VAR_29.conn == VAR_4) &&
     VAR_28.conn < VAR_0)
  VAR_31 = VAR_22;

 if ((VAR_29.conn == VAR_6 || VAR_29.conn == VAR_5)
     && VAR_28.conn < VAR_11)
  VAR_31 = VAR_22;

 if (VAR_29.conn == VAR_1 && VAR_29.pdsk == VAR_15 &&
     VAR_28.conn < VAR_0 && VAR_28.pdsk > VAR_15)
  VAR_31 = VAR_24;

 return VAR_31;
}
