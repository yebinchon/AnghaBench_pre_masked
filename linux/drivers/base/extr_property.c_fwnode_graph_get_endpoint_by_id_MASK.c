
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fwnode_handle {int dummy; } ;
struct fwnode_endpoint {scalar_t__ port; scalar_t__ id; int member_0; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_1 (struct fwnode_handle const*,struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (struct fwnode_handle*,struct fwnode_endpoint*) ;
 struct fwnode_handle* FUNC_4 (struct fwnode_handle*) ;
 int FUNC_5 (struct fwnode_handle*) ;

struct fwnode_handle *
FUNC_6(const struct fwnode_handle *VAR_2,
    u32 VAR_3, u32 VAR_4, unsigned long VAR_5)
{
 struct fwnode_handle *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 unsigned int VAR_8 = 0;
 bool VAR_9 = VAR_5 & VAR_1;
 bool VAR_10 = !(VAR_5 & VAR_0);

 while ((VAR_6 = FUNC_1(VAR_2, VAR_6))) {
  struct fwnode_endpoint VAR_11 = { 0 };
  int VAR_12;

  if (VAR_10) {
   struct fwnode_handle *VAR_13;
   bool VAR_14;

   VAR_13 = FUNC_2(VAR_6);
   VAR_14 = FUNC_0(VAR_13);
   FUNC_5(VAR_13);
   if (!VAR_14)
    continue;
  }

  VAR_12 = FUNC_3(VAR_6, &VAR_11);
  if (VAR_12 < 0)
   continue;

  if (VAR_11.port != VAR_3)
   continue;

  if (VAR_11.id == VAR_4)
   return VAR_6;

  if (!VAR_9)
   continue;






  if (VAR_11.id < VAR_4 ||
      (VAR_7 && VAR_8 < VAR_11.id))
   continue;

  FUNC_5(VAR_7);
  VAR_7 = FUNC_4(VAR_6);
  VAR_8 = VAR_11.id;
 }

 return VAR_7;
}
