
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct xs_watch {scalar_t__ callback_data; } ;
struct xenbusb_softc {int xbs_id_components; int xbs_probe_children; int xbs_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char const*,int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_6(struct xs_watch *VAR_3, const char **VAR_4,
   unsigned int VAR_5)
{
 struct xenbusb_softc *VAR_6;
 device_t VAR_7;
 char *VAR_8;
 char *VAR_9;
 char *VAR_10;
 char *VAR_11;
 u_int VAR_12;

 VAR_6 = (struct xenbusb_softc *)VAR_3->callback_data;
 VAR_7 = VAR_6->xbs_dev;

 if (VAR_5 <= VAR_1) {
  FUNC_0(VAR_7, "xenbusb_devices_changed: "
         "Short Event Data.\n");
  return;
 }

 VAR_8 = FUNC_3(VAR_4[VAR_1], VAR_0);
 VAR_11 = FUNC_2(VAR_8, '/');
 if (VAR_11 == ((void*)0))
  goto out;
 *VAR_11 = 0;
 VAR_9 = VAR_11 + 1;

 VAR_11 = FUNC_2(VAR_9, '/');
 if (VAR_11 == ((void*)0))
  goto out;
 *VAR_11++ = 0;







 VAR_10 = VAR_11;
 for (VAR_12 = 0; VAR_12 < VAR_6->xbs_id_components; VAR_12++) {
  VAR_11 = FUNC_2(VAR_11, '/');
  if (VAR_11 == ((void*)0))
   break;
  VAR_11++;
 }
 if (VAR_11 != ((void*)0))
  *VAR_11 = 0;

 if (*VAR_10 != 0 && VAR_12 >= VAR_6->xbs_id_components - 1) {
  FUNC_5(VAR_6->xbs_dev, VAR_9, VAR_10);
  FUNC_4(VAR_2, &VAR_6->xbs_probe_children);
 }
out:
 FUNC_1(VAR_8, VAR_0);
}
