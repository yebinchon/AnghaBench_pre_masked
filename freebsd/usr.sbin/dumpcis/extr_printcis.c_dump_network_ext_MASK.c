
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int u_char ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static void
FUNC_4(u_char *VAR_0, int VAR_1)
{
 static const char *VAR_2[] = {
  "Undefined", "ARCnet", "Ethernet", "Token ring",
  "Localtalk", "FDDI/CDDI", "ATM", "Wireless"
 };
 static const char *VAR_3[] = {
  "Undefined", "UTP", "STP", "Thin coax",
  "THICK coax", "Fiber", "900 MHz", "2.4 GHz",
  "5.4 GHz", "Diffuse Infrared", "Point to point Infrared"
 };
 u_int VAR_4 = 0;

 if (VAR_1 < 1)
  return;
 switch (VAR_0[0]) {
 case 1:
  if (VAR_1 < 2)
   goto err;
  FUNC_1("\tNetwork technology: %s\n", VAR_2[VAR_0[1] & 7]);
  break;
 case 2:
  if (VAR_1 < 5)
   goto err;
  FUNC_1("\tNetwork speed: ");
  FUNC_0(FUNC_3(VAR_0 + 1));
  FUNC_2('\n');
  break;
 case 3:
  if (VAR_1 < 2)
   goto err;
  if (VAR_0[1] <= 10)
   VAR_4 = VAR_0[1];
  FUNC_1("\tNetwork media: %s\n", VAR_3[VAR_4]);
  break;
 case 4:
  if (VAR_1 <= 2 || VAR_1 < VAR_0[1] + 2)
   goto err;
  FUNC_1("\tNetwork node ID:");
  for (VAR_4 = 0; VAR_4 < VAR_0[1]; VAR_4++)
   FUNC_1(" %02x", VAR_0[VAR_4 + 2]);
  FUNC_2('\n');
  break;
 case 5:
  if (VAR_1 < 2)
   goto err;
  FUNC_1("\tNetwork connector: %s connector standard\n",
         (VAR_0[1] == 0) ? "open" : "closed");
  break;
 err:
  FUNC_1("\tWrong length for network extension tuple\n");
  return;
 }
}
