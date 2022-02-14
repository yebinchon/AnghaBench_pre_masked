
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
__attribute__((used)) static void FUNC_1 (int VAR_1) {
  switch (VAR_1 & 255) {
    case 129:
      FUNC_0 (VAR_0, "running");
      break;
    case 132:
      FUNC_0 (VAR_0, "ignored");
      break;
    case 131:
      FUNC_0 (VAR_0, "interrupted");
      break;
    case 135:
      FUNC_0 (VAR_0, "cancelled");
      break;
    case 128:
      FUNC_0 (VAR_0, "terminated");
      break;
    case 133:
      FUNC_0 (VAR_0, "failed");
      break;
    case 134:
      FUNC_0 (VAR_0, "decryption_failed");
      break;
    case 130:
      FUNC_0 (VAR_0, "io_failed");
      break;
    default:
      FUNC_0 (VAR_0, "%d", VAR_1);
  }
}
